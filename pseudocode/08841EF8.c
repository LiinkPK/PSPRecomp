/* Entry 0x08841EF8 | file offset 0x0003EED0 | FUN_08841ef8 | bytes 108 */

void FUN_08841ef8(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_089d4958;
  iVar2 = 0;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x4a0);
    }
    if (iVar2 == 0) break;
    (**(code **)(*(int *)(iVar2 + 0x544) + 0xfc))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x544) + 0xf8));
  }
  return;
}

