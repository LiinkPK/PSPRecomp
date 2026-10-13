/* Entry 0x088083A8 | file offset 0x00005380 | FUN_088083a8 | bytes 124 */

void FUN_088083a8(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_089d2800;
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = DAT_089d2800;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x6c);
      (**(code **)(*(int *)(iVar1 + 0x70) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x70) + 8),3);
    }
  }
  DAT_08b63280 = 0;
  return;
}

