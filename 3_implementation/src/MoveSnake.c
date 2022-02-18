void MoveSnake(psnakeHead head)   //move the snake in the next step
{
	int length=head->length;
	int i,j;
	psnakeNode pfirst=head->pbody;
	psnakeNode p;
	FindHeadNewPosition(head);
	FindBodyNewPosition(pfirst);
	pfirst->backdirection=pfirst->curdirection;
	pfirst->curdirection=head->headdirection;
	for(i=1;i<length;i++)
	{
		p=pfirst+i;
		FindBodyNewPosition(p);
		
		p->backdirection=p->curdirection;
		p->curdirection=(p-1)->backdirection;	
	}
}
