/* Entry 0x08932000 | file offset 0x0012EFD8 | FUN_08932000 | bytes 144 */

void FUN_08932000(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_0887ba5c();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar1 = FUN_0887b3ec(param_2,param_3,0,param_4,0,0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  FUN_088d428c(param_1 + 0x10,param_1 + 0x18,&DAT_089cf2e8,1);
  return;
}

