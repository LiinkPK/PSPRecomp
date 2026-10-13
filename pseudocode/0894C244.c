/* Entry 0x0894C244 | file offset 0x0014921C | FUN_0894c244 | bytes 108 */

undefined4 FUN_0894c244(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0x90);
  uVar2 = *(undefined4 *)(param_1 + 0x8c);
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0894cf98(param_1,*(undefined4 *)(param_1 + 0x88),uVar2,param_2,param_3);
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
    *(undefined4 *)(param_1 + 0x90) = uVar3;
  }
  return uVar1;
}

