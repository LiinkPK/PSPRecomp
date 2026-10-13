/* Entry 0x0883A6FC | file offset 0x000376D4 | FUN_0883a6fc | bytes 2180 */

void FUN_0883a6fc(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0 [4];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar4 = *(uint *)(param_1 + 0x38c);
  if ((uVar4 & 0x80) == 0) {
    if (((*(byte *)(param_1 + 0x197) & 0x80) != 0) ||
       (bVar1 = false, (*(uint *)(param_1 + 0x188) & 0x20) != 0)) {
      bVar1 = true;
    }
    if (!bVar1) {
      cVar5 = *(char *)(param_2 + 0x34);
      if (cVar5 != '\0') {
        if ((*(uint *)(param_1 + 0x38c) & 1) == 0) {
          FUN_089a3868(local_80,param_2);
        }
        else {
          FUN_089a3a44(0xbf800000,&local_50,param_2);
          local_60 = local_50;
          local_5c = local_4c;
          local_58 = local_48;
          local_54 = local_44;
          local_70 = local_50;
          local_6c = local_4c;
          local_68 = local_48;
          local_64 = local_44;
          FUN_089a3868(local_80,&local_70);
        }
        FUN_08835ba4(param_1,local_90);
        uVar4 = *(uint *)(param_1 + 0x38c);
      }
      bVar1 = (uVar4 & 0x20) != 0;
      if ((bVar1) && (cVar5 != '\0')) {
        cVar5 = '\x01';
      }
      switch(cVar5) {
      case '\0':
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\x01':
        if (bVar1) {
          local_bc = 0.0;
          local_b8 = 0;
          uVar7 = 0x3f000000;
        }
        else {
          FUN_0881334c(param_2,&local_bc,&local_b8);
          uVar7 = FUN_088132d0(param_2);
        }
        if ((local_bc == 0.0) && (iVar3 = FUN_088374b0(param_1), iVar3 == 0)) {
          FUN_08831f04(uVar7,param_1,param_2);
          uVar4 = *(uint *)(param_2 + 0x28);
        }
        else {
          FUN_08832034(local_bc,local_b8,param_1,param_2);
          uVar4 = *(uint *)(param_2 + 0x28);
        }
        uVar4 = uVar4 | 1;
        break;
      case '\x02':
        FUN_0881341c(param_2,&local_bc,&local_b8);
        uVar7 = FUN_088132d0(param_2);
        FUN_08832544(local_bc,local_b8,uVar7,param_1,param_2);
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\x03':
        FUN_0881341c(param_2,&local_bc,&local_b8);
        uVar7 = local_b8;
        uVar6 = FUN_088132d0(param_2);
        iVar3 = FUN_08832560(local_bc,uVar7,uVar6,param_1,param_2);
        if (iVar3 == 0) {
          FUN_088133b4(param_2,&local_c0,&local_b8);
          FUN_0883265c(local_c0,local_b8,param_1,param_2,0);
        }
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\x04':
        FUN_0881334c(param_2,&local_bc,&local_b8);
        FUN_088325d0(local_bc,local_b8,param_1,param_2,0);
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\x05':
        FUN_088133b4(param_2,&local_c0,&local_b8);
        FUN_08832744(local_c0,local_b8,param_1,param_2,0);
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\x06':
        FUN_088133b4(param_2,&local_c0,&local_b8);
        FUN_0883265c(local_c0,local_b8,param_1,param_2,1);
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\a':
        FUN_088133b4(param_2,&local_c0,&local_b8);
        FUN_0883265c(local_c0,local_b8,param_1,param_2,0);
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\b':
        FUN_088133b4(param_2,&local_c0,&local_b8);
        FUN_08832744(local_c0,local_b8,param_1,param_2,1);
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\t':
        FUN_088133b4(param_2,&local_c0,&local_b8);
        FUN_08832744(local_c0,local_b8,param_1,param_2,2);
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\n':
        FUN_088133b4(param_2,&local_c0,&local_b8);
        FUN_08832744(local_c0,local_b8,param_1,param_2,3);
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\v':
        FUN_08813484(param_2,&local_b4,&local_b0,&local_ac,&local_a8,&local_a4,local_a0);
        FUN_08832bb0(local_b4,local_b0,local_ac,local_a8,local_a4,param_1,param_2,local_a0[0],0);
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\f':
        FUN_08813484(param_2,&local_b4,&local_b0,&local_ac,&local_a8,&local_a4,local_a0);
        FUN_08832bb0(local_b4,local_b0,local_ac,local_a8,local_a4,param_1,param_2,local_a0[0],1);
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\r':
        FUN_08813484(param_2,&local_b4,&local_b0,&local_ac,&local_a8,&local_a4,local_a0);
        FUN_08832c20(local_b4,local_b0,local_ac,local_a8,local_a4,param_1,param_2,local_a0[0]);
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\x0e':
        FUN_08813484(param_2,&local_b4,&local_b0,&local_ac,&local_a8,&local_a4,local_a0);
        FUN_08832d64(local_b4,local_b0,local_ac,local_a4,param_1,param_2,local_a0[0]);
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\x0f':
        FUN_08813484(param_2,&local_b4,&local_b0,&local_ac,&local_a8,&local_a4,local_a0);
        iVar3 = FUN_08832d9c(local_b4,local_b0,local_ac,local_a4,param_1,param_2,local_a0[0]);
        if (iVar3 == 0) {
          FUN_08832bb0(local_b4,local_b0,local_ac,local_a8,local_a4,param_1,param_2,local_a0[0],1);
        }
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\x10':
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\x11':
        FUN_0881341c(param_2,&local_bc,&local_b8);
        uVar7 = local_b8;
        fVar2 = local_bc;
        uVar6 = FUN_088132d0(param_2);
        iVar3 = FUN_08832560(fVar2,uVar7,uVar6,param_1,param_2);
        if (iVar3 == 0) {
          FUN_0881334c(param_2,&local_bc,&local_b8);
          if ((local_bc == 0.0) && (iVar3 = FUN_088374b0(param_1), iVar3 == 0)) {
            uVar7 = FUN_088132d0(param_2);
            FUN_08831f04(uVar7,param_1,param_2);
          }
          else {
            FUN_08832034(local_bc,local_b8,param_1,param_2);
          }
        }
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\x12':
        *(undefined4 *)(param_1 + 0x31c) = 0x42700000;
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\x13':
        FUN_0881334c(param_2,&local_bc,&local_b8);
        FUN_088325d0(local_bc,local_b8,param_1,param_2,1);
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      case '\x14':
        FUN_088133b4(param_2,&local_c0,&local_b8);
        FUN_08832744(local_c0,local_b8,param_1,param_2,4);
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
        break;
      default:
        uVar4 = *(uint *)(param_2 + 0x28) | 1;
      }
      *(uint *)(param_2 + 0x28) = uVar4;
      if ((*(short *)(param_1 + 0x180) != 100) && ((*(uint *)(param_1 + 900) & 0x40) != 0)) {
        *(uint *)(param_1 + 900) = *(uint *)(param_1 + 900) & 0xffffffbf;
      }
    }
  }
  return;
}

