/* Entry 0x0899D780 | file offset 0x0019A758 | FUN_0899d780 | bytes 76 */

uint * FUN_0899d780(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  if (((uint)param_1 & 3) == 0) {
    uVar1 = *param_1;
  }
  else {
    uVar1 = (uint)*(byte *)((int)param_1 + 3) << 0x18 | (uint)*(byte *)((int)param_1 + 2) << 0x10 |
            (uint)*(byte *)((int)param_1 + 1) << 8 | (uint)(byte)*param_1;
  }
  *param_2 = uVar1;
  return param_1 + 1;
}

