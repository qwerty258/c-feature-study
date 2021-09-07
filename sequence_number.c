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
#include <stdint.h>
int main()
{
    uint16_t a = 0;
    uint16_t b = 65535;
    int16_t ret = a-b;
    printf("%d\n", ret);
    return 0;
}
