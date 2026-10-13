/* Entry 0x08816A00 | file offset 0x000139D8 | FUN_08816a00 | bytes 316 */

undefined4 FUN_08816a00(char *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = DAT_089d4910;
  if (*param_1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else if (param_2 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    iVar6 = 0;
    if (0 < *(short *)(param_2 + 0x1c)) {
      do {
        iVar3 = FUN_0881e898(uVar2,param_2,iVar6);
        bVar1 = false;
        iVar5 = 0;
        while( true ) {
          FUN_0881baa8();
          iVar5 = FUN_0881cb80(iVar5);
          if (iVar5 == 0) break;
          if ((*(short **)(iVar5 + 0x48) != (short *)0x0) && (**(short **)(iVar5 + 0x48) == iVar3))
          {
            FUN_08818f00(iVar5,0x3f2,0);
            bVar1 = true;
          }
        }
        if (!bVar1) {
          uVar4 = FUN_08899300();
          FUN_088981b4(uVar4,iVar3,1,1);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(short *)(param_2 + 0x1c));
    }
    uVar2 = 0;
  }
  return uVar2;
}

