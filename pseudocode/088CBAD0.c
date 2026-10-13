/* Entry 0x088CBAD0 | file offset 0x000C8AA8 | FUN_088cbad0 | bytes 64 */

char FUN_088cbad0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + *(char *)(param_1 + 0x773) * 0xc6 + 0xd5);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 1);
  }
  return cVar1;
}

