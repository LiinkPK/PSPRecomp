/* Entry 0x089AE948 | file offset 0x001AB920 | FUN_089ae948 | bytes 180 */

int FUN_089ae948(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    if (param_1 != param_2) {
      FUN_089acb8c();
      uVar6 = *(undefined4 *)(param_2 + 4);
      uVar3 = *(undefined2 *)(param_2 + 0xe);
      uVar4 = *(undefined2 *)(param_2 + 8);
      uVar5 = *(undefined2 *)(param_2 + 10);
      uVar1 = *(undefined1 *)(param_2 + 0xc);
      uVar2 = *(undefined1 *)(param_2 + 0xd);
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
      *(undefined2 *)(param_1 + 8) = uVar4;
      *(undefined2 *)(param_1 + 10) = uVar5;
      *(undefined1 *)(param_1 + 0xc) = uVar1;
      *(undefined1 *)(param_1 + 0xd) = uVar2;
      *(undefined2 *)(param_1 + 0xe) = uVar3;
      *(undefined4 *)(param_1 + 4) = uVar6;
      FUN_089ab6dc(0,uVar6);
    }
    return param_1;
  }
  return 0;
}

