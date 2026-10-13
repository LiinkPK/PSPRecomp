/* Entry 0x08861148 | file offset 0x0005E120 | FUN_08861148 | bytes 144 */

undefined4
FUN_08861148(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08861050();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    param_5 = param_5 + param_6 * 0x18;
    *(undefined4 *)(param_5 + 0x40c) = param_1;
    *(undefined4 *)(param_5 + 0x410) = param_2;
    *(undefined4 *)(param_5 + 0x414) = param_3;
    *(undefined4 *)(param_5 + 0x418) = param_4;
    uVar2 = 0;
  }
  return uVar2;
}

