/* Entry 0x08888868 | file offset 0x00085840 | FUN_08888868 | bytes 272 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08888868(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined1 *)(param_1 + 0x7c5) = 0;
  if ((*(int *)(param_1 + 0x4c) == 9) && ((*(uint *)(*(int *)(param_1 + 0x7c8) + 0xbde8) & 2) != 0))
  {
    *(undefined1 *)(param_1 + 0x7c5) = 5;
  }
  if ((*(char *)(param_1 + 0x7c5) == '\0') && (*(int *)(param_1 + 0x804) != -1)) {
    FUN_088a18b0(DAT_089d6c88,100,0);
    FUN_0889f234(DAT_089d6c30,*(undefined4 *)(param_1 + 0x804));
  }
  FUN_08895f60(DAT_089d6ae8);
  iVar1 = func_0x08b0db90(_DAT_08b11e28,0);
  if (iVar1 == 0) {
    FUN_08886824(DAT_089d69f8);
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_08873db0(&local_20,2);
    func_0x08abb570(_DAT_08abbdf8);
  }
  FUN_08883f78();
  FUN_08883f64();
  *(undefined4 *)(param_1 + 0x48) = 2;
  return;
}

