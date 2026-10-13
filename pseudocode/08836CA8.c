/* Entry 0x08836CA8 | file offset 0x00033C80 | FUN_08836ca8 | bytes 144 */

void FUN_08836ca8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088377c0();
  if (iVar1 == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x1a8);
  }
  else {
    uVar2 = 0;
  }
  if (*DAT_089d85e8 == '\x01') {
    func_0x08ad0978(uVar2,param_2,param_1,param_1,0,param_3,100,0xffffffff);
  }
  return;
}

