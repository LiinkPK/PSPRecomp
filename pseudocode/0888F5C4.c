/* Entry 0x0888F5C4 | file offset 0x0008C59C | FUN_0888f5c4 | bytes 124 */

void FUN_0888f5c4(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 4;
  cVar1 = *(char *)(param_1 + 4 + (1 - param_2) * 8 + 5);
  if (*(char *)(param_1 + 4 + param_2 * 8 + 5) == '\x01') {
    uVar2 = 3;
    if (cVar1 == '\x01') {
      uVar2 = 4;
    }
  }
  else if (cVar1 == '\x01') {
    uVar2 = 5;
  }
  FUN_088daa40(DAT_09b491e8,uVar2,0);
  return;
}

