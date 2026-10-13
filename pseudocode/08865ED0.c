/* Entry 0x08865ED0 | file offset 0x00062EA8 | FUN_08865ed0 | bytes 264 */

void FUN_08865ed0(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = DAT_089d5ec0;
  cVar1 = *(char *)(DAT_089d5ec0 + 0x2cd0);
  if (cVar1 != '\0') {
    if (cVar1 < '\x02') {
      if ('\0' < cVar1) {
        FUN_089a01fc(0);
        FUN_0886d5b4();
        *(undefined1 *)(iVar2 + 0x2cd0) = 2;
        return;
      }
    }
    else {
      if (cVar1 < '\x03') {
        *(undefined1 *)(DAT_089d5ec0 + 0x2cce) = 0;
        FUN_08866a3c(iVar2);
        FUN_0886615c(iVar2);
        *(bool *)(iVar2 + 0x2ccf) = *(char *)(iVar2 + 0x2ccf) == '\0';
        FUN_0886603c(iVar2);
        *(undefined4 *)(iVar2 + 0x8c0) = 0;
        FUN_0886598c(iVar2);
        FUN_08865e50(iVar2);
        FUN_089a0190(4,0);
        FUN_08865918(iVar2);
        FUN_0886598c(iVar2);
        FUN_088668c0(iVar2);
        *(undefined1 *)(iVar2 + 0x2cd0) = 3;
        return;
      }
      if (cVar1 < '\x04') {
        FUN_089a01fc(1);
        FUN_0886d550();
        *(undefined1 *)(iVar2 + 0x2cd0) = 0;
      }
    }
  }
  FUN_0886598c(DAT_089d5ec0);
  return;
}

