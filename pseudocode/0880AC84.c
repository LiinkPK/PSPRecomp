/* Entry 0x0880AC84 | file offset 0x00007C5C | FUN_0880ac84 | bytes 56 */

bool FUN_0880ac84(int param_1,int param_2)

{
  return (*(uint *)(param_1 + 4 + ((uint)(int)*(short *)(param_2 + 0x26) >> 5) * 4) &
         1 << ((int)*(short *)(param_2 + 0x26) & 0x1fU)) == 0;
}

