/* Entry 0x089AE344 | file offset 0x001AB31C | FUN_089ae344 | bytes 224 */

int FUN_089ae344(int param_1,int param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    uVar4 = 0;
    if ((param_3 & 0x301) != 0) {
      uVar4 = param_3 & 0xfffffffe;
    }
    if (param_1 != param_2) {
      FUN_089ac71c();
      uVar3 = *(undefined4 *)(param_2 + 4);
      uVar1 = *(undefined2 *)(param_2 + 0xc);
      uVar2 = *(undefined2 *)(param_2 + 2);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined2 *)(param_1 + 0xc) = uVar1;
      *(undefined4 *)(param_1 + 4) = uVar3;
      *(undefined2 *)(param_1 + 2) = uVar2;
      FUN_089ae424(uVar3,1,0,param_4);
      uVar3 = FUN_089ae1e4(*(undefined4 *)(param_2 + 8),*(undefined2 *)(param_2 + 0xc),uVar4,param_4
                          );
      *(undefined4 *)(param_1 + 8) = uVar3;
    }
    return param_1;
  }
  return 0;
}

