//is aplha chechks if a character is alphabetic or not. It must return either a 1(if the char matches the tested class) or a 0(if it does not match)

int	isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
