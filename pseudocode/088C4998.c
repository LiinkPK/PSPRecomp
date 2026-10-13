/* Entry 0x088C4998 | file offset 0x000C1970 | FUN_088c4998 | bytes 184 */

bool FUN_088c4998(int *param_1)

{
  uint uVar1;
  short *psVar2;
  short local_50;
  short local_4e [31];
  
  psVar2 = &local_50;
  FUN_08935524(&local_50,&DAT_089cbbec,0x40);
  *param_1 = 1;
  param_1[1] = 1;
  while( true ) {
    uVar1 = (uint)local_50;
    if ((int)uVar1 < 0) {
      return *param_1 == 1;
    }
    if ((*(uint *)(DAT_089d726c + (uVar1 >> 5) * 4) & 1 << (uVar1 & 0x1f)) == 0) break;
    psVar2 = psVar2 + 1;
    local_50 = *psVar2;
  }
  *param_1 = 0;
  return false;
}

