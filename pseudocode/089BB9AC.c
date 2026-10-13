/* Entry 0x089BB9AC | file offset 0x001B8984 | FUN_089bb9ac | bytes 276 */

undefined4
FUN_089bb9ac(int param_1,int param_2,uint param_3,int param_4,uint param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if ((param_2 != 0) && (param_4 != 0)) {
    if ((param_2 != param_1) && (((param_5 | 1) & param_3) != 0)) {
      uVar1 = FUN_089bd054(param_2);
      uVar2 = 1;
      if ((int)param_3 < 0) {
        uVar2 = 2;
      }
      FUN_089be508(param_1,*(undefined2 *)(param_2 + 0x10),*(undefined1 *)(param_2 + 0x16),
                   *(undefined2 *)(param_2 + 0x12),*(undefined2 *)(param_2 + 0x14),uVar1,
                   *(undefined1 *)(param_2 + 0x19),*(undefined2 *)(param_2 + 0x24),
                   *(undefined2 *)(param_2 + 0x26),*(undefined1 *)(param_2 + 0x28),
                   *(undefined1 *)(param_2 + 0x29),uVar2,param_6,*(undefined2 *)(param_2 + 0x2a),0,
                   param_4);
      return 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}

