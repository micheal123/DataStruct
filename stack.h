void InitStack(Stack &st){
	st.Maxsize=20;
	st.base=new char[st.Maxsize];
	st.top=st.base;	
}
void push(Stack &st,TElemType e){
	if((st.top+1)-st.base>20)
	{	
		printf("栈的空间用完了！！");
		return; 
	} 
	*st.top=e;
	st.top++;
}
TElemType pop(Stack &st){
	if(st.base==st.top){
			printf("已经为空栈！！");
			return '$'; 
	}
	st.top--;
	return *st.top; 	
}
TElemType peek(Stack &st){
	if(st.top==st.base){
			printf("已经为空栈！！");
			return '$'; 
	}
	return *(st.top-1);
}
