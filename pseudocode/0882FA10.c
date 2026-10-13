/* Entry 0x0882FA10 | file offset 0x0002C9E8 | FUN_0882fa10 | bytes 180 */

void FUN_0882fa10(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5)

{
  if ((*(int *)(param_3 + 0x48) != 0) && ((*(uint *)(param_3 + 0x58) & 8) == 0)) {
    if (param_5 != '\0') {
      *(uint *)(param_3 + 0x58) = *(uint *)(param_3 + 0x58) | 8;
    }
    FUN_0882fbf0(param_3);
    FUN_0882f0d4(param_1,param_2,param_3,param_4);
  }
  return;
}

