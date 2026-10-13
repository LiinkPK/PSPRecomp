/* Entry 0x089AF6B0 | file offset 0x001AC688 | FUN_089af6b0 | bytes 196 */

int FUN_089af6b0(int param_1,int param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    uVar4 = 0;
    if ((param_3 & 0xe1) != 0) {
      uVar4 = param_3 & 0xfffffffe;
    }
    if (param_1 != param_2) {
      FUN_089ac914();
      uVar1 = *(undefined2 *)(param_2 + 8);
      uVar2 = *(undefined2 *)(param_2 + 2);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined2 *)(param_1 + 8) = uVar1;
      uVar1 = *(undefined2 *)(param_2 + 8);
      uVar3 = *(undefined4 *)(param_2 + 4);
      *(undefined2 *)(param_1 + 2) = uVar2;
      uVar3 = FUN_089af550(uVar3,uVar1,uVar4,param_4);
      *(undefined4 *)(param_1 + 4) = uVar3;
    }
    return param_1;
  }
  return 0;
}

