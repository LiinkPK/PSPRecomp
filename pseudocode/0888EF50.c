/* Entry 0x0888EF50 | file offset 0x0008BF28 | FUN_0888ef50 | bytes 132 */

void FUN_0888ef50(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  cVar1 = *(char *)(param_1 + 4 + (1 - param_2) * 0x18 + 0x14);
  if (*(char *)(param_1 + 4 + param_2 * 0x18 + 0x14) == '\x01') {
    uVar2 = cVar1 == '\x01';
  }
  else if (cVar1 == '\x01') {
    uVar2 = 2;
  }
  FUN_088daa40(DAT_09b491e8,uVar2,0);
  return;
}

