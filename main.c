#include "ft_printf.h"

 int	main(void)
{
	int	a;

	a = ft_printf("_%c_\n", 'z');
	printf("_value: %i_\n\n", a);

	a = printf("_%c_\n", 'z');
	printf("_value: %i_\n\n", a);	


	a = ft_printf("_this_is_a_test_\n");
	printf("_value: %i_\n\n", a);	


	a = printf("_this_is_a_test_\n");
	printf("_value: %i_\n\n", a);	

	ft_printf("_%s_\n", NULL);
	// printf("_%s_\n", NULL);
	
	
	ft_printf("_%i_\n", 1234);


	ft_printf("_%i_\n", 1234);

	
	ft_printf("_%i_\n", -1234);
	
	ft_printf("_%u_\n", 123456789);
	
	ft_printf("_%x_\n", -1234);
	
	printf("_%x_\n", -1234);
	
	ft_printf("_%X_\n", -1234);
	
	ft_printf("_%p_\n", &a);
	printf("_%p_\n", &a);
	ft_printf("_%p_\n", NULL);
	printf("_%p_\n", NULL);
}