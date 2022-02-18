void ClearSnake(psnakeHead head)   //Clear the snake
{
	int length=head->length;
	int i;
	psnakeNode pfirst=head->pbody;
	mvaddch(head->row,head->col,' ');
	for (i=0;i<length;i++)
	{
		mvaddch((pfirst+i)->row,(pfirst+i)->col,' ');
	}
	refresh();
}