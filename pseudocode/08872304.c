/* Entry 0x08872304 | file offset 0x0006F2DC | FUN_08872304 | bytes 404 */

void FUN_08872304(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *(undefined4 *)(param_1 + 0x44) = param_3;
  *(undefined1 *)(param_1 + 0x48) = 0x7f;
  *(undefined1 *)(param_1 + 0x49) = 0x7f;
  if ((param_4 & 4) != 0) {
    *(char *)(param_1 + 0x49) = (char)(int)((float)*(byte *)(param_1 + 0x49) - 127.5);
  }
  if ((param_4 & 0x10) != 0) {
    *(char *)(param_1 + 0x49) = (char)(int)((float)*(byte *)(param_1 + 0x49) + 127.5);
  }
  if ((param_4 & 0x20) != 0) {
    *(char *)(param_1 + 0x48) = (char)(int)((float)*(byte *)(param_1 + 0x48) - 127.5);
  }
  if ((param_4 & 8) != 0) {
    *(char *)(param_1 + 0x48) = (char)(int)((float)*(byte *)(param_1 + 0x48) + 127.5);
  }
  FUN_088720b4(1);
  FUN_08871e24(param_1,0);
  FUN_088720b4(0);
  return;
}

