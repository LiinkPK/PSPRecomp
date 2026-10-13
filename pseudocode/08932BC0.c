/* Entry 0x08932BC0 | file offset 0x0012FB98 | FUN_08932bc0 | bytes 180 */

void FUN_08932bc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 char param_6)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_5 == 2) {
    if (param_6 != '\0') {
      uVar1 = 0xe;
    }
    FUN_08933088(param_1);
    FUN_08932fb8(param_1);
    FUN_08931f14(param_1 + 0x38,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                 *(undefined4 *)(param_1 + 0x34),1,param_2,param_3,param_4,uVar1);
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  return;
}

