/* Entry 0x088B1230 | file offset 0x000AE208 | FUN_088b1230 | bytes 292 */

undefined4
FUN_088b1230(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 *param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  
  if (*DAT_089d7280 == '\0') {
    *(undefined4 *)(param_1 + 0x588) = param_3;
    *(undefined4 *)(param_1 + 0x58c) = param_4;
    FUN_08935828(param_1,0,0x2c4);
    FUN_088b168c(DAT_089d7280,param_1,0x2c4);
    *(undefined4 *)(param_1 + 0x34) = 1;
    if (param_6 == (undefined1 *)0x0) {
      FUN_08935bb4(param_1 + 0x3c,param_2,0x200);
    }
    else {
      iVar5 = 0;
      puVar3 = (undefined1 *)0x0;
      do {
        *(undefined1 *)(param_1 + iVar5 + 0x3c) = *param_2;
        cVar1 = *(char *)(param_1 + iVar5 + 0x3c);
        if (cVar1 == '\0') {
          if (puVar3 == (undefined1 *)0x0) break;
          puVar4 = (undefined1 *)0x0;
          puVar6 = puVar3;
        }
        else {
          puVar6 = param_2 + 1;
          if (cVar1 == '\x13') {
            puVar3 = param_2 + 2;
            puVar6 = param_6;
          }
          iVar5 = iVar5 + 1;
          puVar4 = puVar3;
        }
        puVar3 = puVar4;
        param_2 = puVar6;
      } while (iVar5 < 0x200);
    }
    *(undefined4 *)(param_1 + 0x23c) = param_5;
    uVar2 = FUN_088b1054(param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

