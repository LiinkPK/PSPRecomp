/* Entry 0x088C42A8 | file offset 0x000C1280 | FUN_088c42a8 | bytes 180 */

bool FUN_088c42a8(int *param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_60 [20];
  
  puVar1 = local_60;
  FUN_08935524(local_60,&DAT_089cbb9c,0x50);
  *param_1 = 0;
  iVar3 = *param_3;
  uVar2 = 0;
  param_1[1] = iVar3;
  iVar4 = 0;
  do {
    if ((*(uint *)(DAT_089d726c + (*puVar1 >> 5) * 4) & 1 << (*puVar1 & 0x1f)) != 0) {
      iVar4 = iVar4 + 1;
      *param_1 = iVar4;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 0x14);
  return iVar3 <= iVar4;
}

