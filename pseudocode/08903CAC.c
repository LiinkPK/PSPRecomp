/* Entry 0x08903CAC | file offset 0x00100C84 | FUN_08903cac | bytes 192 */

undefined4 FUN_08903cac(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((*param_1 == -1) || (param_1[1] <= param_2)) {
    uVar5 = 0;
  }
  else {
    iVar4 = sceNetAdhocMatchingSelectTarget(*param_1,param_1 + param_2 * 4 + 2,param_4,param_3);
    if (iVar4 < 0) {
      uVar5 = 0;
    }
    else {
      uVar1 = *(undefined1 *)((int)param_1 + param_2 * 0x10 + 9);
      uVar2 = *(undefined1 *)((int)param_1 + param_2 * 0x10 + 10);
      *(char *)((int)param_1 + 0x11d) = (char)param_1[param_2 * 4 + 2];
      uVar3 = *(undefined1 *)((int)param_1 + param_2 * 0x10 + 0xb);
      *(undefined1 *)((int)param_1 + 0x11e) = uVar1;
      iVar4 = param_1[param_2 * 4 + 3];
      *(undefined1 *)((int)param_1 + 0x11f) = uVar2;
      uVar1 = *(undefined1 *)((int)param_1 + param_2 * 0x10 + 0xd);
      *(undefined1 *)(param_1 + 0x48) = uVar3;
      *(char *)((int)param_1 + 0x121) = (char)iVar4;
      *(undefined1 *)((int)param_1 + 0x122) = uVar1;
      *(undefined1 *)(param_1 + 0x45) = 0;
      uVar5 = 1;
    }
  }
  return uVar5;
}

