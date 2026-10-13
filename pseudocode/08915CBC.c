/* Entry 0x08915CBC | file offset 0x00112C94 | FUN_08915cbc | bytes 112 */

void FUN_08915cbc(void)

{
  int iVar1;
  
  *(undefined1 *)(DAT_089d6ac8 + 0x6b2) = 0;
  iVar1 = 0;
  while (iVar1 = FUN_0881cbb8(iVar1,0xffffffff), iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x544) + 0xfc))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0x544) + 0xf8));
  }
  FUN_0881cb5c();
  return;
}

