/* Entry 0x08931AB4 | file offset 0x0012EA8C | FUN_08931ab4 | bytes 372 */

void FUN_08931ab4(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_630 [1508];
  undefined *local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  char *local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  
  cVar1 = param_1[0x773];
  iVar2 = FUN_088b70c8((int)*param_1);
  uVar3 = FUN_088c09fc(*(undefined1 *)(iVar2 + 1));
  if (param_1[cVar1 * 0xc6 + 0xd5] != '\0') {
    iVar2 = 0;
    do {
      iVar4 = FUN_088b7b18(param_1 + cVar1 * 0xc6 + 0x10,iVar2);
      if (-1 < iVar4) {
        FUN_088b97e8(&local_34,iVar4);
        iVar4 = local_34;
        local_3c = local_34;
        local_38 = local_30;
        if ((local_34 != 0) && (iVar5 = FUN_088cbad0(param_1), iVar5 < *(char *)(iVar4 + 0xe))) {
          FUN_088b765c(param_1 + cVar1 * 0xc6 + 0x10,iVar2,0xffffffff);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
  }
  FUN_088bf108(auStack_630);
  FUN_088bf238(auStack_630,param_1,0);
  local_4c = &DAT_089ce7e0;
  local_48 = uVar3;
  local_44 = auStack_630;
  local_40 = param_1;
  FUN_088c5e4c(param_2,&local_4c,0,0);
  FUN_088bf17c(auStack_630,2);
  return;
}

