/* Entry 0x08807538 | file offset 0x00004510 | FUN_08807538 | bytes 308 */

void FUN_08807538(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while (iVar1 = FUN_08841f84(iVar1), iVar1 != 0) {
    FUN_08833804(iVar1);
  }
  FUN_088076d4();
  FUN_088284c8();
  FUN_0880afd4();
  if (DAT_089d2800 != 0) {
    DAT_089d2808 = 0;
    iVar1 = DAT_089d2800;
    while (iVar2 = iVar1, iVar2 != 0) {
      iVar1 = DAT_089d2800;
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0x6c);
      }
      if ((*(uint *)(iVar2 + 0x10) & 0x40) == 0) {
        (**(code **)(*(int *)(iVar2 + 0x70) + 0x2c))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x70) + 0x28),&DAT_089d2808);
      }
      else {
        if (iVar2 != 0) {
          (**(code **)(*(int *)(iVar2 + 0x70) + 0xc))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 0x70) + 8),3);
        }
        iVar2 = 0;
      }
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x68) = *(int *)(iVar2 + 0x68) + 1;
      }
    }
    FUN_08809228(&DAT_089d2808);
  }
  return;
}

