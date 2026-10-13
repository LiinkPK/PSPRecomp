/* Entry 0x08911A2C | file offset 0x0010EA04 | FUN_08911a2c | bytes 380 */

void FUN_08911a2c(undefined4 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  if (cVar1 < '\x02') {
    if ((-1 < cVar1) && ('\0' < cVar1)) {
      FUN_08911ba8(param_1);
      uVar2 = 0xff;
      iVar3 = (uint)*(byte *)((int)param_1 + 0xe) +
              (int)(char)(int)(*(float *)(DAT_089d69e0 + 0x18) * 63.75);
      if (iVar3 < 0xff) {
        uVar2 = (undefined1)iVar3;
      }
      *(undefined1 *)((int)param_1 + 0xe) = uVar2;
      FUN_088d9b28(*param_1,*(undefined1 *)((int)param_1 + 0xe));
      if (*(char *)((int)param_1 + 0xf) == '\0') {
        *(undefined1 *)((int)param_1 + 0xd) = 2;
      }
    }
  }
  else if (cVar1 < '\x03') {
    FUN_08911ba8(param_1);
    uVar2 = 0;
    iVar3 = (uint)*(byte *)((int)param_1 + 0xe) -
            (int)(char)(int)(*(float *)(DAT_089d69e0 + 0x18) * 32.0);
    if (0 < iVar3) {
      uVar2 = (undefined1)iVar3;
    }
    *(undefined1 *)((int)param_1 + 0xe) = uVar2;
    FUN_088d9b28(*param_1,*(undefined1 *)((int)param_1 + 0xe));
    if (*(char *)((int)param_1 + 0xe) == '\0') {
      *(undefined1 *)((int)param_1 + 0xd) = 3;
    }
  }
  else if (cVar1 < '\x04') {
    (**(code **)(param_1[4] + 0x14))((int)param_1 + (int)*(short *)(param_1[4] + 0x10));
  }
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  return;
}

