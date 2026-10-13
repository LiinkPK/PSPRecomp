/* Entry 0x088081B8 | file offset 0x00005190 | FUN_088081b8 | bytes 92 */

undefined4 FUN_088081b8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x34) + 4);
  uVar2 = 0;
  if (((((cVar1 == '\x04') || (cVar1 == '\x06')) || (cVar1 == '\x05')) ||
      ((cVar1 == '\t' || (cVar1 == '\f')))) ||
     ((cVar1 == '\r' || ((cVar1 == '\x0e' || (cVar1 == '\x0f')))))) {
    uVar2 = 1;
  }
  return uVar2;
}

