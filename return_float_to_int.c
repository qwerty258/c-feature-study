// *************************************************************************
//
// Copyright (C) 2021  yaofei zheng
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
//

#include <stdio.h>
#include <math.h>

int test_func(void)
{
    float a = 1.32435f;
    int b = 3;
    printf("%f\n", a * b);
    return lroundf(a * b);
}

int main()
{
    printf("%d\n", test_func());
    return 0;
}
