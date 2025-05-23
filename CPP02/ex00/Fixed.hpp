/* *************************************************************************** */
/*                 *#########                                                  */
/*                ##........../##           KWAK!                              */
/*              *#,.......,##....#######  /                                    */
/*              ##........./....##////##                                       */
/*    ##          ##...........,##((##                                         */
/*   #.###/        ##,..........*                                              */
/*  #(.....(######(###*........,##                                             */
/* ##.............................##      File    : Fixed.hpp                  */
/* ##.    __       __  o       __  ##                                          */
/* ##.   |_  |\ | | __ | |\ | |_    *#.   Created : abquaoub                   */
/*  ##   |__ | \| |__| | | \| |__   ,#,             2024/09/22 14:17:12        */
/*   ##.............................##                                         */
/*    /##........................*##      Updated : abquaoub                   */
/*       ###/................*###.                  2024/09/22 14:17:12        */
/*            ##############.                                                  */
/* *************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed
{
public:
    
    Fixed();
    Fixed (const Fixed &obj);
    Fixed& operator=(const Fixed& C);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();
private:
    int value;
    static const int fractional = 8;
};


#endif