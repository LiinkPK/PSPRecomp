/* Entry 0x08806964 | file offset 0x0000393C | FUN_08806964 | bytes 208 */

void FUN_08806964(undefined4 param_1,int param_2)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  *(undefined4 *)(param_2 + 0xae4) = 0;
  *(undefined4 *)(param_2 + 0xac0) = 0;
  *(undefined4 *)(param_2 + 0xabc) = 0;
  *(undefined4 *)(param_2 + 0xab8) = 0;
  *(undefined4 *)(param_2 + 0xab0) = param_1;
  *(undefined4 *)(param_2 + 0xab4) = 0;
  *(undefined4 *)(param_2 + 0xae8) = *(undefined4 *)(param_2 + 0xaec);
  local_30 = *(undefined4 *)(param_2 + 0x90);
  local_2c = *(undefined4 *)(param_2 + 0x94);
  local_28 = *(undefined4 *)(param_2 + 0x98);
  local_24 = *(undefined4 *)(param_2 + 0x9c);
  if (*(char *)(param_2 + 0xaf0) == '\0') {
    FUN_089a3868(param_2 + 0xa90,&local_30);
    FUN_089a3868(param_2 + 0xaa0,&local_30);
    *(undefined1 *)(param_2 + 0xaf0) = 1;
  }
  FUN_089a3868(param_2 + 0xa90,param_2 + 0xaa0);
  return;
}

