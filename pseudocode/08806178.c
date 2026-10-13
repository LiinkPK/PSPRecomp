/* Entry 0x08806178 | file offset 0x00003150 | FUN_08806178 | bytes 104 */

void FUN_08806178(int param_1,undefined4 param_2)

{
  FUN_08804c94();
  if (*(char *)(param_1 + 0xaf0) != '\0') {
    FUN_088050e0(param_1);
    FUN_08830d6c(param_1 + 0x730,*(undefined4 *)(param_1 + 0x394));
  }
  FUN_0880ea20(*(undefined4 *)(param_1 + 0x398),param_2,param_1);
  FUN_08805a38(param_1);
  return;
}

