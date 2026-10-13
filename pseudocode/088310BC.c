/* Entry 0x088310BC | file offset 0x0002E094 | FUN_088310bc | bytes 532 */

void FUN_088310bc(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x544) = &DAT_089c7c78;
    FUN_088a9944(param_1 + 0x4c8,*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x5c));
    FUN_088a26f8(0,param_1 + 0x510,1);
    FUN_08843f88(*(undefined4 *)(param_1 + 0x390));
    if (*(int *)(param_1 + 0x394) != 0) {
      FUN_0886eb84();
    }
    FUN_08831c04(param_1);
    if (*(int *)(param_1 + 0x528) != 0) {
      FUN_08842138();
    }
    if (*(int *)(param_1 + 0x30c) != 0) {
      FUN_08842138();
      *(undefined4 *)(param_1 + 0x30c) = 0;
    }
    if (*(int *)(param_1 + 0x398) != 0) {
      FUN_0881040c(*(int *)(param_1 + 0x398) + 0x18);
      FUN_0880cd28(*(undefined4 *)(param_1 + 0x398));
      FUN_088312ec(param_1,param_1 + 0x398);
    }
    FUN_088312ec(param_1,param_1 + 0x52c);
    FUN_088312ec(param_1,param_1 + 0x314);
    FUN_088312ec(param_1,param_1 + 0x3a8);
    FUN_088312ec(param_1,param_1 + 0x4a8);
    FUN_088312ec(param_1,param_1 + 0x4ac);
    FUN_088312ec(param_1,param_1 + 0x534);
    if (*(int *)(param_1 + 0x3ac) != 0) {
      FUN_0883e0ac(*(int *)(param_1 + 0x3ac),2);
      FUN_088312ec(param_1,param_1 + 0x3ac);
    }
    if (*(int *)(param_1 + 0x310) != 0) {
      FUN_088bf41c();
      if (*(int *)(param_1 + 0x310) != 0) {
        FUN_088bf17c(*(int *)(param_1 + 0x310),0);
      }
      FUN_088312ec(param_1,param_1 + 0x310);
    }
    FUN_08814704(param_1 + 0x4c8,2);
    if (param_1 + 0x4c0 != 0) {
      *(undefined **)(param_1 + 0x4c0) = &DAT_089c6fb8;
      FUN_08814360(param_1 + 0x4c0,0);
    }
    if (param_1 + 0x4b8 != 0) {
      *(undefined **)(param_1 + 0x4b8) = &DAT_089c7c48;
      FUN_08814360(param_1 + 0x4b8,0);
    }
    FUN_08814360(param_1 + 0x4b0,2);
    FUN_0886ee90(param_1 + 0x330,2);
    FUN_0882f614(param_1 + 0x130,2);
    if ((param_2 & 1) != 0) {
      FUN_0883133c(param_1);
    }
  }
  return;
}

