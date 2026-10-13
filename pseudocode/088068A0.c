/* Entry 0x088068A0 | file offset 0x00003878 | FUN_088068a0 | bytes 156 */

void FUN_088068a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined4 *)(param_3 + 0xad4) = param_1;
  *(undefined4 *)(param_3 + 0xad8) = 0;
  *(undefined4 *)(param_3 + 0xadc) = param_2;
  *(undefined4 *)(param_3 + 0xae0) = 0;
  local_20 = *(undefined4 *)(param_3 + 0x90);
  local_1c = *(undefined4 *)(param_3 + 0x94);
  local_18 = *(undefined4 *)(param_3 + 0x98);
  local_14 = *(undefined4 *)(param_3 + 0x9c);
  if (*(char *)(param_3 + 0xaf0) == '\0') {
    FUN_089a3868(param_3 + 0xa90,&local_20);
    FUN_089a3868(param_3 + 0xaa0,&local_20);
    *(undefined1 *)(param_3 + 0xaf0) = 1;
  }
  return;
}

