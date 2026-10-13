/* Entry 0x088CB8C8 | file offset 0x000C88A0 | FUN_088cb8c8 | bytes 128 */

int FUN_088cb8c8(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_089d77f4;
  iVar5 = *param_2;
  iVar4 = *(int *)(*(int *)(DAT_089d77f4 + 4) + 4);
  if (iVar5 < iVar4) {
    iVar3 = iVar5 * 0x54;
    iVar2 = *(int *)(DAT_089d77f4 + 4) + iVar3;
    do {
      if (*(ushort *)(iVar2 + 0xc) == param_1) {
        *param_2 = iVar5 + 1;
        return *(int *)(iVar1 + 4) + iVar3 + 8;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x54;
      iVar2 = iVar2 + 0x54;
    } while (iVar5 < iVar4);
  }
  *param_2 = iVar4;
  return 0;
}

