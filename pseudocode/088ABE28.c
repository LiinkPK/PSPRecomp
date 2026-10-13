/* Entry 0x088ABE28 | file offset 0x000A8E00 | FUN_088abe28 | bytes 212 */

void FUN_088abe28(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [20];
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    FUN_0893476c(auStack_30,"%s%02d","GameData",iVar2);
    FUN_08935bb4(iVar1,auStack_30,0x14);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x14;
  } while (iVar2 < 0x14);
  FUN_08935828(param_1 + 0x1a4,0,0x14);
  FUN_08935bb4(param_1 + 0x1a4,param_1,0x14);
  FUN_08935828(param_1 + 0xe18,0,0x10);
  FUN_08935828(param_1 + 0x1b8,0,0x28);
  return;
}

