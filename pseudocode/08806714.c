/* Entry 0x08806714 | file offset 0x000036EC | FUN_08806714 | bytes 204 */

void FUN_08806714(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  *(undefined4 *)(param_5 + 0xab8) = param_1;
  *(undefined4 *)(param_5 + 0xabc) = param_2;
  *(undefined4 *)(param_5 + 0xac0) = param_3;
  *(undefined4 *)(param_5 + 0xab0) = param_4;
  *(undefined4 *)(param_5 + 0xab4) = 0;
  *(undefined4 *)(param_5 + 0xae8) = *(undefined4 *)(param_5 + 0xaec);
  local_30 = *(undefined4 *)(param_5 + 0x90);
  local_2c = *(undefined4 *)(param_5 + 0x94);
  local_28 = *(undefined4 *)(param_5 + 0x98);
  local_24 = *(undefined4 *)(param_5 + 0x9c);
  if (*(char *)(param_5 + 0xaf0) == '\0') {
    FUN_089a3868(param_5 + 0xa90,&local_30);
    FUN_089a3868(param_5 + 0xaa0,&local_30);
    *(undefined1 *)(param_5 + 0xaf0) = 1;
  }
  FUN_089a3868(param_5 + 0xa90,param_5 + 0xaa0);
  return;
}

