/* Entry 0x088132D0 | file offset 0x000102A8 | FUN_088132d0 | bytes 124 */

undefined4 FUN_088132d0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  undefined4 local_10;
  
  bVar1 = *(byte *)(param_1 + 0x35);
  if (bVar1 < 5) {
    if (bVar1 < 4) {
LAB_08813330:
      if (*(int *)(param_1 + 0x30) == 0) {
        return 0;
      }
      return *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x24);
    }
  }
  else if (bVar1 != 0x13) goto LAB_08813330;
  local_10 = 0;
  FUN_0881334c(param_1,auStack_1c,auStack_18);
  local_20 = local_10;
  uVar2 = FUN_089a3bf8(&local_20);
  return uVar2;
}

