/* Entry 0x088C3CB4 | file offset 0x000C0C8C | FUN_088c3cb4 | bytes 124 */

bool FUN_088c3cb4(uint *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  uint local_10 [4];
  
  local_10[0] = 10;
  local_10[1] = 0xb;
  local_10[2] = 0xc;
  uVar1 = (uint)((*(uint *)(DAT_089d726c + (local_10[*param_3] >> 5) * 4) &
                 1 << (local_10[*param_3] & 0x1f)) != 0);
  *param_1 = uVar1;
  param_1[1] = 1;
  return uVar1 == 1;
}

