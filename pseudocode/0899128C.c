/* Entry 0x0899128C | file offset 0x0018E264 | FUN_0899128c | bytes 60 */

uint FUN_0899128c(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = DAT_089da420;
  do {
    if (*(int *)(iVar1 + 0x178) == 0) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x3c;
  } while (uVar2 < 0x20);
  return 0xffffffff;
}

