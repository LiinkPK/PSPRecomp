/* Entry 0x088C48D0 | file offset 0x000C18A8 | FUN_088c48d0 | bytes 200 */

bool FUN_088c48d0(int *param_1)

{
  uint uVar1;
  short *psVar2;
  short local_10 [8];
  
  psVar2 = local_10;
  local_10[1] = 0x52;
  local_10[2] = 0x53;
  local_10[3] = 0x54;
  local_10[4] = 0x55;
  local_10[5] = 0x56;
  local_10[6] = 0x57;
  local_10[7] = 0xffff;
  *param_1 = 1;
  param_1[1] = 1;
  uVar1 = 0x51;
  do {
    if ((*(uint *)(DAT_089d726c + (uVar1 >> 5) * 4) & 1 << (uVar1 & 0x1f)) == 0) {
      *param_1 = 0;
      return false;
    }
    psVar2 = psVar2 + 1;
    uVar1 = (uint)*psVar2;
  } while (-1 < (int)uVar1);
  return *param_1 == 1;
}

