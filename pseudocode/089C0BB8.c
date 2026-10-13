/* Entry 0x089C0BB8 | file offset 0x001BDB90 | FUN_089c0bb8 | bytes 84 */

uint * FUN_089c0bb8(uint *param_1,uint *param_2)

{
  if (((uint)param_1 & 3) != 0) {
    *param_2 = (uint)*(byte *)((int)param_1 + 3) << 0x18 | (uint)*(byte *)((int)param_1 + 2) << 0x10
               | (uint)*(byte *)((int)param_1 + 1) << 8 | (uint)(byte)*param_1;
    return param_1 + 1;
  }
  *param_2 = *param_1;
  return param_1 + 1;
}

