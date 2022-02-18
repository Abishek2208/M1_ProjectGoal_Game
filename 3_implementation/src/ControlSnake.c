// Cotrol the snake's motion according to the key the user pressed
void ControlSnake(int key,psnakeHead head)    //Control the snake using keyboard
{
	enum direction dhead=head->headdirection;
	enum direction dd=dhead;
	switch (key)
	{
		case KEY_LEFT:
            		if(dhead!=RIGHT) {dd=LEFT;}
            		break;
        		case KEY_UP:
            		if(dhead!=DOWN) {dd=UP;}
            		break;
        		case KEY_DOWN:
            		if(dhead!=UP)      {dd=DOWN;}
           			break;
        		case KEY_RIGHT:
            		if(dhead!=LEFT)   {dd=RIGHT;}
           			break;
        		default:
           			 break; 
	}
	head->headdirection=dd;
}