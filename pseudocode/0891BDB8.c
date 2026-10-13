/* Entry 0x0891BDB8 | file offset 0x00118D90 | FUN_0891bdb8 | bytes 68 */

int FUN_0891bdb8(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  iVar2 = 0;
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      iVar2 = (int)*(char *)(param_1 + 0x2a04) + (int)*(char *)(param_1 + 0x2a11);
    }
  }
  else if (cVar1 < '\x02') {
    iVar2 = (int)*(char *)(param_1 + 0x2a05);
  }
  return iVar2;
}

