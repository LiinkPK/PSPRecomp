/* Entry 0x0892CD98 | file offset 0x00129D70 | FUN_0892cd98 | bytes 200 */

void FUN_0892cd98(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined2 local_20 [2];
  
  FUN_0892cf8c();
  local_20[0] = 1;
  local_20[1] = 3;
  FUN_0892c868(param_1 + *(int *)(param_1 + 0x34) * 0x28 + 0x38,*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),local_20[*(int *)(param_1 + 0x34)],param_2,param_3,
               param_4,param_5,param_6);
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}

