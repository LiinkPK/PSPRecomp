/* Entry 0x08913364 | file offset 0x0011033C | FUN_08913364 | bytes 532 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08913364(int param_1)

{
  if (*(int *)(param_1 + 0x68) != 0x15) {
    FUN_08911160(*(undefined4 *)(param_1 + 0x750));
    *(undefined4 *)(param_1 + 0x750) = 0;
    FUN_089168ec(param_1);
    *(undefined4 *)(param_1 + 0x748) = 0;
    *(undefined4 *)(param_1 + 0x74c) = 0;
    FUN_0886278c(*(undefined4 *)(param_1 + 0x744));
    FUN_08844ab4(DAT_089d4960);
    FUN_08813bb8();
    func_0x08a80154(_DAT_08a80218);
    FUN_0891f740(DAT_089d8520);
    FUN_08916324(param_1);
    FUN_08911550(DAT_089d83a8);
    FUN_08915d68(param_1);
    FUN_08915fe4(param_1);
    FUN_0891541c(param_1);
    FUN_08915cbc(param_1);
    FUN_08864db8();
    FUN_0890f17c();
    FUN_08915bdc(param_1);
    FUN_088eb370();
    func_0x08ad091c();
    FUN_088ab500(DAT_089d6dd0);
    FUN_088ab330(DAT_089d6dd0);
    FUN_088958fc(DAT_089d6ad0);
    FUN_08841ed8();
    if (*(char *)(param_1 + 0x7d7) != '\0') {
      FUN_08913810(param_1);
      *(undefined1 *)(param_1 + 0x7d7) = 0;
    }
    FUN_088711e4();
    func_0x08b438a8(*(undefined4 *)(param_1 + 0x88));
    func_0x08b43834(*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
    func_0x08b44fd4(*(undefined4 *)(param_1 + 0x8c));
    func_0x08b44fa8(*(undefined4 *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x8c) = 0;
    FUN_088a2780();
    FUN_08911368(DAT_089d83a8);
  }
  FUN_088a952c(DAT_089d6dc8);
  FUN_088a5e6c(DAT_089d6d80);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_0890ec88();
  FUN_0890ef04();
  FUN_0891107c(DAT_089d83a0);
  FUN_088cf6cc(DAT_089d7830,0xff);
  FUN_088a18b0(DAT_089d6c88,100,1);
  if (*(code **)(param_1 + 0x74) == (code *)0x0) {
    if (*(code **)(param_1 + 0x78) == (code *)0x0) {
      FUN_08933c00(DAT_089d85e8);
      func_0x089e0bdc(_DAT_089e75c4,0);
    }
    else {
      (**(code **)(param_1 + 0x78))();
    }
  }
  else {
    (**(code **)(param_1 + 0x74))();
  }
  return;
}

