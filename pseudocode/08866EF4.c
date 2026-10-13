/* Entry 0x08866EF4 | file offset 0x00063ECC | FUN_08866ef4 | bytes 64 */

int FUN_08866ef4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x288000;
  if (*(char *)(param_1 + 0x2ccf) == '\x01') {
    iVar2 = 0x710000;
  }
  iVar1 = sceGeEdramGetAddr();
  return iVar1 + iVar2;
}

